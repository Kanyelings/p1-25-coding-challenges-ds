// function to calculate sum of numbers in an array of numbers
pub fn sum_array(arr: [i32; 10]) {
    let mut sum = 0;
    for i in arr.iter() {
        sum += i;
    }
    println!("The sum of the array is: {}", sum);
}

// function to orint sum of numbers in a borrowed array of numbers
#[allow(dead_code)]
pub fn sum_array_borrowed(arr: &[i32]) {
    let mut sum = 0;
    for i in arr.iter() {
        sum += i;
    }
}