fn main() {
    let src = [
        "fn main() {{",
        "    let src = [",
        "    ];",
        "    for lineidx in 0..2 {",
        "        println!(\"{}\", src[lineidx]);",
        "    }",
        "    for lineidx in 0..src.len() {",
        "        println!(\"        {cm}{ln}{cm},\", cm = 0x22 as char, ln = src[lineidx]);",
        "    }}",
        "    for lineidx in 2..src.len() {{",
        "        println!(\"{}\", src[lineidx]);",
        "    }}",
        "}}",
    ];
    for lineidx in 0..2 {
        println!("{}", src[lineidx]);
    }
    for lineidx in 0..src.len() {
        println!("        {cm}{ln}{cm},", cm = 0x22 as char, ln = src[lineidx]);
    }
    for lineidx in 2..src.len() {
        println!("{}", src[lineidx]);
    }
}
