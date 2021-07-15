// function to print all positive odd numbers less than 100
pub fn print_odds() {
    println!("\nPrint Odds\n",);
    for i in 1..100 {
        if i % 2 == 1 {
            println!("i = {}", i);
        }
    }
    println!("\n\n");
}

// function to print all positive odd numbers less than 100
#[allow(dead_code)]
pub fn print_odds2() {
    let mut i = 1;
    while i < 100 {
        println!("i = {}", i);
        i += 2;
    }
    println!("\n\n");
}
