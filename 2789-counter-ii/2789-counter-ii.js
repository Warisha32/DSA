/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
  const resetValue = init;
    let value = init;
    const increment = () => ++value;
    const decrement = () => --value;
    const reset = () => (value = resetValue);
    return {increment,decrement,reset};

};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */