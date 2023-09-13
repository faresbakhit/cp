pub mod problem;

#[macro_export]
macro_rules! read_from {
    ($reader:ident) => {{
        let mut buf = String::new();
        $reader.read_line(&mut buf).unwrap();
        buf
    }};

    ($reader:ident as [$type:ty]) => {
        read_from!($reader)
            .split_whitespace()
            .map(|v| v.parse::<$type>().unwrap())
    };

    ($reader:ident as $type:ty) => {{
        let mut buf = String::new();
        $reader.read_line(&mut buf).unwrap();
        buf.trim().parse::<$type>().unwrap()
    }};
}

#[macro_export]
macro_rules! write_to {
    ($writer:ident as $($arg:tt)*) => {
        use std::io::Write;
        write!($writer, $($arg)*).unwrap()
    };
}
