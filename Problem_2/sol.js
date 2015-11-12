fib = function(n) {
    var ans = 0;
    sum = function(a) {
        var s = a.reduce(function(first, last) {
            return first + last;
            });
        return s;
    };
    if (n === 0) {
        return ans;
    } else {
        var last_two = [0, 1];
        for (var i = 1; i < n; i ++) {
            ans = sum(last_two);
            last_two[0] = last_two[1];
            last_two[1] = ans;
        }
    }
    return ans;
};
