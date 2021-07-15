// function to return maximum element in an array of numbers
pub fn get_max(arr: &[i32]) -> i32 {
    let mut max = arr[0];
    for i in arr.iter() {
        if i > &max  {
            max = *i;
        }
    }
    println!("The maximum value is {}", max);
    max
}