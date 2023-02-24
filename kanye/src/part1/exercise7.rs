// function to print the sum of all even numbers greater than 10 and less than 30
pub fn sum_even_10_30() {
    let mut sum = 0;
    for i in 11..30 {
        if i % 2 == 0 {
            sum += i
        }
    }
    println!("sum of even numbers = {}", sum);
}

// function to print the sum of all odd numbers greater than 10 and less than 30 variant 1
#[allow(dead_code)]
pub fn sum_odd_10_30_1() {
    let mut sum = 0;
    let mut i = 11;
    while i < 30 {
        if i % 2 == 1 {
            sum += i;
        }
    } println!("sum of odd numbers = {}", sum);
}