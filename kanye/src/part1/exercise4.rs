use crate::part1::exercise3;

// function to print all mutliplication tables from 1 to 10
pub fn mult_tables() {
    println!("\nMultiplication tables of 1 to 10\n");
    for i in 1..11 {
        exercise3::mult_table(i);
    }
    println!("\n\n");
}
