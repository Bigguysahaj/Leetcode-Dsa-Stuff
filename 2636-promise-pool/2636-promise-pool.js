/**
 * @param {Function[]} functions
 * @param {number} n
 * @return {Function}
 */
var promisePool = async function(functions, n) {
    return new Promise ((resolve,reject) =>{
        let i = 0;
        let inProgress = 0;


        function callback() {
            if(i===functions.length && inProgress===0){
                resolve();
            }
            // until i is less than n, the functions takes another function to execute right after
            while( i < functions.length && inProgress<n ){
                functions[i++]()
                    .then(()=>{
                        inProgress--;
                        callback();
                    });
                inProgress++;
            }
        }
    callback();
    });
};

/**
 * const sleep = (t) => new Promise(res => setTimeout(res, t));
 * promisePool([() => sleep(500), () => sleep(400)], 1)
 *   .then(console.log) // After 900ms
 */