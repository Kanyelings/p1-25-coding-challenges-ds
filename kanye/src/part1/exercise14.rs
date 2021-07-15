// function to print the fibonacci series
pub fn fibonacci() {
    let mut a = 0;
    let mut b = 1;
    for i in 0..11 {
        let n = a + b;
        println!("{}", b);
        a = b;
        b = n;
    }
}
