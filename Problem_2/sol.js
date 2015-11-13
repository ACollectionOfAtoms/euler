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

main = function() {
    maximum = 4000000;
    evenSum = 0;
    n = 1;
    while (fib(n) < maximum) {
        n += 1;
        if (fib(n) % 2 === 0) {
            evenSum += fib(n);
        }
    }
    return evenSum;
};

console.log(main());
