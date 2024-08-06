use cmake::Config;

fn main()
{
    let dst = Config::new("src/cpp")
        .define("BUILD_SHARED_LIBS", "ON")
        .build();

    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=dylib=foo");
}
