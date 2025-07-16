fn main() {
    let src = [
        "fn main() {{",
        "    let src = [",
        "    ];",
        "    for lineidx in 0..src.len() {{",
        "        println!(\"{{}}\", src[lineidx]);",
        "    }}",
        "}}",
    ];
    for lineidx in 0..src.len() {
        println!("{}", src[lineidx]);
    }
}
