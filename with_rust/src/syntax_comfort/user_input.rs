

use std::io;

pub fn user_input() {
    let mut input: String = String::new();
    io::stdin().read_line(&mut input).expect("Error reading line!");
    println!("User input is: {}", input);
}