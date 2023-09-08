/**
 * @param {number} millis
 */
async function sleep(millis) {
    const neededPromise = new Promise((resolve) => {
        setTimeout(resolve, millis);
    })
    return neededPromise;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */