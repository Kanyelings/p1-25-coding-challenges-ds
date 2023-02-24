// function to display output of to_fahreheit
pub fn display_fahr(cel: i32)  {
    println!("{}", to_fahrenheit(cel));
}


// function to convert input from celcius to fahrenheit
pub fn to_fahrenheit(celcius: i32) -> i32 {
    let fahrenheit = celcius * 9 / 5 + 32;
    fahrenheit
}
