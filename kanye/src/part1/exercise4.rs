use crate::part1::exercise3;

// function to print all mutliplication tables from 1 to 10
pub fn mult_tables() {
    println!("\nMultiplication tables of 1 to 10\n");
    for i in 1..11 {
        exercise3::mult_table(i);
    }
    println!("\n\n");
}

// function to print all multiplication tables from 1 to 10 variant 1
#[allow(dead_code)]
pub fn mult_tables_v1() {
    println!("\nMultiplication tables of 1 to 10\n");
    for i in 1..11 {
        for j in 1..20 {
            println!("{} * {} = {}", i, j, i * j);
        }
    }
    println!("\n\n");
}