// function to remove all negative numbers from array
pub fn remove_neg(arr: &[i32]) {
    let mut process_vec = vec![];
    for i in arr.iter() {
        process_vec.push(i);
    }
    let mut i = 0;
    while i < process_vec.len() {
        if process_vec[i] < &0 {
            process_vec.remove(i);
            i = 0;
            continue
        }
        i += 1;
    }
    println!("{:?}", process_vec );
}