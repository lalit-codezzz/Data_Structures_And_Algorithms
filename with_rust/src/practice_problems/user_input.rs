

use std::io;

pub fn take_user_input() {
    let mut input: String = String::new();
    io::stdin().read_line(&mut input).expect("Error reading line!");
    println!("User input is: {}", input);
}