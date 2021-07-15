// function to display  the return value of factorial_ten()
pub fn display_fact_10() {
    println!("\nDisplay the factorial of 10\n");
    println!("Factorial of 10 = {}", factorial_ten());
    println!("\n\n");
}

// function to display the factorial of any number
pub fn display_fact(n: i32) {
    println!("\nDisplay the factorial of {}\n", n);
    println!("Factorial of {} = {}", n, factorial_n(n));
    println!("\n\n");
}



// function to calculate the factorial of 10
pub fn factorial_ten() -> i32 {
    let mut fact = 1;
    for i in 1..11 {
        fact = i * fact;
    }
    fact
}

// function to calculate the factorial of n
pub fn factorial_n(n: i32) -> i32 {
    let lim = n+1;
    let mut fact = 1;
    for i in 1..lim {
        fact *= i;
    }
    fact
}