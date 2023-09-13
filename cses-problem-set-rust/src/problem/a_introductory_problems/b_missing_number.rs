use crate::{problem::Problem, read_from, write_to};
use std::io;

pub struct MissingNumber;

impl Problem for MissingNumber {
    fn solve(&self) {
        let stdin = io::stdin();
        let mut stdout = io::stdout();

        let n = read_from!(stdin as usize);
        let mut s = n * (n + 1) >> 1;

        for i in read_from!(stdin as [usize]) {
            s -= i;
        }

        write_to!(stdout as "{s}");
    }
}
