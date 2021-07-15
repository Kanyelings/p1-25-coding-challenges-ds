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