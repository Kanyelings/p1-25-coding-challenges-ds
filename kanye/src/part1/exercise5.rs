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

// function to calculate the sum of numbers from 1 to 10 variant 2
pub fn sum_one_to_ten_2() -> i32 {
    let mut sum = 0;
    let mut i = 1;
    loop {
        if i > 10 {break;}
        sum += i;
        i += 1
    }
    sum
}

// function to calculate the sum of numbers from 1 to 10 variant 3
pub fn sum_one_to_ten_3() -> i32 {
    let mut sum = 0;
    let mut i = 1;
    while i <= 10 {
        sum += i;
        i += 1;
    }
    sum
}