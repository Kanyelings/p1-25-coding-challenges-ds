// Function to print the multiplication table of 7
pub fn mult_table_seven() {
    println!("\nMultiplication table of 7\n");
    for i in 1..20 {
        println!("7 * {} = {}", i, 7*i);
    }
    println!("\n\n");
}

// function to print the multiplication table of a number
pub fn mult_table(num: i32) {
    println!("\nMultiplication table of {}\n", num);
    for i in 1..20 {
        println!("{} * {} = {}", num, i, num*i);
    }
    println!("\n\n");
}

// function to print the multiplication table of 7 variant 1
pub fn mult_table_seven_v1() {
    mult_table(7);
}

// function to print the multiplication table of 7 variant 2
#[allow(dead_code)]
pub fn mult_table_seven_variant() {
    let mut i = 1;
    while i < 20 {
        println!("7 * {} = {}", i, i*7);
        i += 1;
    }
}