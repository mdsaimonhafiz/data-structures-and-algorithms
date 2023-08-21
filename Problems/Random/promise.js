let myPromise = new Promise(function(myResolve, myReject){
    setTimeout(function() {myResolve("Parrot Terminal");}, 3000);
});

myPromise.then(function (value) {
    console.log(value);
});

let yourPromise = new Promise(
    function(yourResolve, yourError){
        setTimeout(
            function(){
                yourResolve("YOU");
            },
        3000);
    }
);

let promise = new Promise(
    function (Resolve, Reject){
        // Producing code - that takes some time
        Resolve(); // successful
        Reject(); // error
    }
);

// Consuming code
promise.then(
    function(value){},
    function(error){}
);
