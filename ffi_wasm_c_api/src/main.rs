mod gen;
mod model;
mod spec;
mod src;
mod str;

use std::fs::File;
use std::io::{BufReader, BufWriter};
use std::path::Path;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // args
    let args: Vec<String> = std::env::args().collect();
    // specfile, outfile
    if args.len() != 3 {
        eprintln!("Usage: {} <spec_file.yml> <out_path>", args[0]);
        std::process::exit(1);
    }

    let spec_file = Path::new(&args[1]);
    let out_path = Path::new(&args[2]);

    // create spec_file reader
    let file = File::open(spec_file)?;
    let reader = BufReader::new(file);
    let spec: spec::Spec = serde_yml::from_reader(reader)?;

    // create src_file writer
    let inc_file_path = Path::join(out_path, "wasm_webgpu_c_api_inc.h");
    let inc_file = File::create(inc_file_path)?;
    let inc_writer = BufWriter::new(inc_file);

    let impl_file_path = Path::join(out_path, "wasm_webgpu_c_api.h");
    let impl_file = File::create(impl_file_path)?;
    let impl_writer = BufWriter::new(impl_file);

    gen::write_wasm_c_api(&spec, inc_writer, impl_writer)?;

    Ok(())
}
