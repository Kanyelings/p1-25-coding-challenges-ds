
// function to display output of to_celsius
pub fn display_cel(fah: i32)  {
    println!("{}", to_celsius(fah));
}


// function to convert input from fahrenheit to celsius
pub fn to_celsius(fahrenheit: i32) -> i32 {
    let celsius = (fahrenheit - 32) * 5 / 9;
    celsius
}

