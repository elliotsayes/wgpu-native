mod gen;
mod model;
mod spec;
mod src;
mod str;

use std::fs::File;
use std::io::{BufReader, BufWriter};

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // args
    let args: Vec<String> = std::env::args().collect();
    // specfile, outfile
    if args.len() != 3 {
        eprintln!("Usage: {} <spec_file.yml> <src_file.h>", args[0]);
        std::process::exit(1);
    }

    let spec_file = &args[1];
    let src_file = &args[2];

    // create spec_file reader
    let file = File::open(spec_file)?;
    let reader = BufReader::new(file);
    let spec: spec::Spec = serde_yml::from_reader(reader)?;

    // create src_file writer
    let file = File::create(src_file)?;
    let writer = BufWriter::new(file);

    gen::write_wasm_c_api(&spec, writer)?;

    Ok(())
}
