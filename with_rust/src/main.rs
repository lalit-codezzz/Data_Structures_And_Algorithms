// mod syntax_comfort;
mod recursion;
fn main() {

    // 1. Taking user input
    // practice_problems::user_input_1::take_user_input();


    // 2. Reversing an array
    // practice_problems::reverse_an_array::reverse_an_array::<5>();

    //3. Maximum element in an array
    // syntax_comfort::maximum_element::maximum_element::<5>();

    //4. Factorial of n
    // let f: i32 = recursion::factorial::fact(5);
    // print!("Factorial of 5 is: {}", f);

    //5. Fibonacci on n
    let f: i32 = recursion::fibonacci::fib(3);
    print!("Fibonacci of N is: {}", f);
}
