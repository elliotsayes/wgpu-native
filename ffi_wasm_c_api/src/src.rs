#[macro_export]
macro_rules! a {
    ($gen:expr, $fmt:literal) => {
        $gen.add(format!($fmt))
    };
    ($gen:expr, $fmt:literal, $($arg:tt)*) => {
        $gen.add(format!($fmt, $($arg)*))
    };
}

#[macro_export]
macro_rules! c {
    ($gen:expr, $($arg:tt)*) => {
        $gen.add(format!("/* {} */", $($arg)*))
    };
}

#[macro_export]
macro_rules! n {
    ($gen:expr) => {
        $gen.newline()
    };
}

#[macro_export]
macro_rules! i {
    ($gen:expr, $fmt:literal) => {
        $gen.add(format!($fmt));
        $gen.indent();
    };
    ($gen:expr, $fmt:literal, $($arg:tt)*) => {
        $gen.add(format!($fmt, $($arg)*));
        $gen.indent();
    };
}

#[macro_export]
macro_rules! i2 {
    ($gen:expr, $fmt:literal) => {
        $gen.add(format!($fmt));
        $gen.indent(); $gen.indent();
    };
    ($gen:expr, $fmt:literal, $($arg:tt)*) => {
        $gen.add(format!($fmt, $($arg)*));
        $gen.indent(); $gen.indent();
    };
}

#[macro_export]
macro_rules! o {
    ($gen:expr, $fmt:literal) => {
        $gen.outdent();
        $gen.add(format!($fmt));
    };
    ($gen:expr, $fmt:literal, $($arg:tt)*) => {
        $gen.outdent();
        $gen.add(format!($fmt, $($arg)*));
    };
}

#[macro_export]
macro_rules! o2 {
    ($gen:expr, $fmt:literal) => {
        $gen.outdent(); $gen.outdent();
        $gen.add(format!($fmt));
    };
    ($gen:expr, $fmt:literal, $($arg:tt)*) => {
        $gen.outdent(); $gen.outdent();
        $gen.add(format!($fmt, $($arg)*));
    };
}

#[macro_export]
macro_rules! oi {
    ($gen:expr, $fmt:literal) => {
        $gen.outdent();
        $gen.add(format!($fmt));
        $gen.indent();
    };
    ($gen:expr, $fmt:literal, $($arg:tt)*) => {
        $gen.outdent();
        $gen.add(format!($fmt, $($arg)*));
        $gen.indent();
    };
}

#[derive(Debug)]
pub struct GeneratedLine {
    pub indent: usize,
    pub text: String,
}

impl GeneratedLine {
    fn new(indent: usize, text: impl Into<String>) -> Self {
        Self {
            indent,
            text: text.into(),
        }
    }
}

pub struct CodeGenerator {
    lines: Vec<Option<GeneratedLine>>,
    indent_level: usize,
}

impl CodeGenerator {
    pub fn new() -> Self {
        Self {
            lines: Vec::new(),
            indent_level: 0,
        }
    }

    pub fn add(&mut self, text: impl Into<String>) {
        self.lines
            .push(Some(GeneratedLine::new(self.indent_level, text)));
    }

    pub fn add_at(&mut self, text: impl Into<String>, indent_level: usize) {
        self.lines
            .push(Some(GeneratedLine::new(indent_level, text)));
    }

    pub fn newline(&mut self) {
        self.lines.push(None);
    }

    pub fn newlines(&mut self, count: usize) {
        for _ in 0..count {
            self.newline();
        }
    }

    pub fn indent(&mut self) {
        self.indent_level += 1;
    }

    pub fn outdent(&mut self) {
        if self.indent_level > 0 {
            self.indent_level -= 1;
        }
    }

    pub fn into_lines(self) -> Vec<Option<GeneratedLine>> {
        self.lines
    }
}
