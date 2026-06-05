use std::io;

pub fn max<const N: usize>(arr: [i32; N]) -> i32 {
    let mut max_ele: i32 = i32::MIN;

    for i in 0..N {
        if max_ele < arr[i] {
            max_ele = arr[i];
        }
    }

    max_ele
}

pub fn maximum_element<const N: usize>() {
    let mut arr: [i32; N] = [0i32; N];
    let mut input: String = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Error reading line!");

    let mut splitted_output = input.split_whitespace();

    for i in 0..N {
        let value = splitted_output
            .next()
            .expect("Nothing found")
            .parse::<i32>()
            .expect("Given type is not i32!");

        arr[i] = value;
    }

    print!("Maximum element in array is: {}", max::<N>(arr));

}
