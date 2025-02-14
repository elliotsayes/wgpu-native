pub fn snake_to_pascal_preserve_caps(string: &str) -> String {
    let parts = string.split('_');
    let mut result = String::new();
    for part in parts {
        if part.is_empty() {
            continue;
        }
        // Capitalize the first letter only
        result.push(part.chars().next().unwrap().to_uppercase().next().unwrap());
        result.push_str(&part[1..]);
    }

    result
}

pub fn snake_to_camel_preserve_caps(string: &str) -> String {
    let pascal = snake_to_pascal_preserve_caps(string);
    pascal
        .chars()
        .next()
        .unwrap()
        .to_lowercase()
        .next()
        .unwrap()
        .to_string()
        + &pascal[1..]
}

pub fn to_singular(name: &str) -> String {
    if name.ends_with("ies") {
        format!("{}y", name.strip_suffix("ies").unwrap())
    } else if name.ends_with("s") {
        name.strip_suffix("s").unwrap().to_string()
    } else {
        unimplemented!();
    }
}
