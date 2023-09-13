mod a_introductory_problems;

pub trait Problem {
    fn solve(&self);
}

pub fn from_str(s: &str) -> Option<Box<dyn Problem>> {
    use a_introductory_problems::*;

    match s {
        "weird-algorithm" => Some(Box::new(a_weird_algorithm::WeirdAlgorithm)),
        "missing-number" => Some(Box::new(b_missing_number::MissingNumber)),
        _ => None,
    }
}
