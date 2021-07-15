// function to calculate the  sum of numbers from 1 to 10
pub fn sum_one_to_ten() -> i32 {
    let mut sum = 0;
    for i in 1..11 {
        sum += i;
    }
    sum
}

// function to display outcome of sum_one_to_ten()
pub fn display_sum() {
    println!("The sum of numbers from 1 to 10 is: {}", sum_one_to_ten());
}
