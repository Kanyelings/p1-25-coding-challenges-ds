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

// function to print all multiplication tables from 1 to 10 variant 2
#[allow(dead_code)]
pub fn mult_tables_v2() {
    println!("\nMultiplication tables of 1 to 10\n");
    let mut i = 1;
    while i < 11 {
        exercise3::mult_table(i);
        i += 1;
    }   
}

// functino to print all multiplication tables from 1 to 10 variant 3
#[allow(dead_code)]
pub fn mult_tables_v3() {
    println!("\nMultiplication tables of 1 to 10\n");
    let mut i = 1;
    while i < 11 {
        let mut j = 1;
        while j <= 20 {
            println!("{} * {} = {}", i, j, i * j);
            j += 1;
        } 
        i += 1;
    }
}