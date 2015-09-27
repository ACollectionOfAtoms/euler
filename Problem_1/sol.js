sum5_3 = function(n) {
  var total = 0;
  for(var i=1; i < n; i ++){
    if(i % 5 === 0 || i % 3 === 0){
      total += i;
    }
  }
  console.log(total);
};
sum5_3(1000);
