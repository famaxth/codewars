func take(_ arr: [Int], _ n: Int) -> [Int] {
    var res = Array<Int>()
    var z = 0
    for i in arr {
        if z < n {
            res.append(i)
        }
        z += 1
    }
    return res
}
