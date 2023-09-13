use cses::problem;
use std::env;

fn main() {
    let mut args = env::args();

    let program = args
        .next()
        .unwrap_or(String::from(env!("CARGO_CRATE_NAME")));

    match env::args().skip(1).next() {
        Some(s) => match problem::from_str(&s) {
            Some(p) => p.solve(),
            None => eprintln!("error: {program}: '{s}' not found"),
        },
        None => {
            eprintln!("usage: {program} <section/problem>")
        }
    }
}
