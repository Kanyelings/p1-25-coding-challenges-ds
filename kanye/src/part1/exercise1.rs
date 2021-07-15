// Function that will print numbers from 1 to 10

pub fn print_one_to_ten() {
    println!("\nPrint 1 to 10\n");
    for j in 1..11 {
        println!("j = {}", j);
    }
    println!("\n\n");
}

#[allow(dead_code)]
pub fn print_one_to_ten2() {
    let mut i = 1;
    while i < 11 {
        println!("i = {}", i);
        i += 1;
    }
    println!("\n\n");
}
