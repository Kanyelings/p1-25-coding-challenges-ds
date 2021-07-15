// function to print average of numbers in an array of numbers
pub fn average(arr: [i32; 10]) {
    let mut sum = 0;
    for i in arr.iter() {
        sum += i;
    }
    let mut average : f32 = sum as f32 / (arr.len() as f32);
    println!("The average of the numbers in the array is {}", average);
}


// function to print average of numbers in an array of numbers variant 1
pub fn average1(arr: [i32; 10]) {
    let mut sum = 0;
    let mut average;
    let mut i = 0;
    while i < arr.len() {
        sum += arr[i];
        i += 1;
    }
    average = sum as f32 / arr.len() as f32;
    println!("The average of the numbers in the array is {}", average);
}