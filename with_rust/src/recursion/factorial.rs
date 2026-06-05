
pub fn fact(n: i32) -> i32 {
    if n == 0 || n == 1 {
        return n;
    }

    n * fact(n - 1)

}