const bouncyCircle = new mojs.Shape({
  parent:       '#bouncyCircle',
  shape:        'circle',
  fill:         {'#F64040': '#FC46AD'},
  radius:       {20: 80},
  duration:     2000,
  isYoyo:       true,
  isShowStart:  true,
  easing:       'elastic.inout',
  repeat:       1,
});

bouncyCircle.play()


var circle = new mojs.Shape({
    shape:        'circle',
    radius:       10,
    radiusX:      20, // explicit radiusX
    left:         '25%',
    fill:         'deeppink',
    isShowStart:  true,
  });
  
  var rect = new mojs.Shape({
    shape:        'rect',
    radius:       15,
    left:         '50%',
    fill:         'cyan',
    isShowStart:  true,
  });
  
  var polygon = new mojs.Shape({
    shape:        'polygon',
    radiusX:      10,
    radiusY:      20,
    left:         '75%',
    fill:         'yellow',
    isShowStart:  true,
  });