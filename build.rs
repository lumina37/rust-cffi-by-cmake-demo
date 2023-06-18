use cmake::Config;

fn main()
{
    let dst = Config::new(".").define("BUILD_SHARED_LIBS", "OFF").build();

    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=static=libfoo");
}
