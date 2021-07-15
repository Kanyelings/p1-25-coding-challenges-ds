use crate::part1::exercise15;

pub fn n(a: i32) -> i32 {
    if a > 0 {
        println!("{}", a);
    }
    if a <= 1 { return 1}
    return exercise15::n(a-1) + exercise15::n(a-2);
}
