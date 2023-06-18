extern "C" {
    fn testcall(v: f32);
}

fn main() {
    println!("Hello world from Rust!");

    // calling the function from foo library
    unsafe {
        testcall(1234.56);
    };
}
