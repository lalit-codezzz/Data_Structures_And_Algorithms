use std::io;

fn reverse<const N: usize>(arr: &mut [i32; N]) {

    let mut i: usize = 0;
    let mut j: usize = N - 1;

    while i < j.try_into().unwrap() {

        let tmp: i32 = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;

        i += 1;
        j -= 1;
    }

}

pub fn reverse_an_array<const N: usize>() {
    let mut arr: [i32; N] = [0i32; N];
    let mut input: String = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Error reading line!");

    let mut splitted_output = input.split_whitespace();

    for i in 0..N {
        let val = splitted_output
            .next()
            .expect("Not enough numbers")
            .parse::<i32>()
            .expect("Invalid type! not i32");
        arr[i] = val;
    }

    reverse::<N>(&mut arr);

    for i in 0..N {
        print!("{} ", arr[i]);
    }

}
