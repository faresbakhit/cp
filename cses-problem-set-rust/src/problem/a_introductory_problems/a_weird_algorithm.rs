use crate::problem::Problem;
use crate::{read_from, write_to};
use std::io;

pub struct WeirdAlgorithm;

impl Problem for WeirdAlgorithm {
    fn solve(&self) {
        let stdin = io::stdin();
        let mut stdout = io::stdout();

        let mut n = read_from!(stdin as u32);

        while n != 1 {
            write_to!(stdout as "{n} ");
            if n & 1 == 0 {
                n >>= 1;
            } else {
                n = n * 3 + 1;
            }
        }

        write_to!(stdout as "1");
    }
}
