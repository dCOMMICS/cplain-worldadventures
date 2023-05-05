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





  const circle = new mojs.Shape({
    shape:        'circle',
    scale:        { 0 : 1 },
    left:         '25%',
    fill:         { 'cyan': 'yellow' },
    radius:       25,
  
    duration:     2000,
    repeat:       999,
  }).play();
  
  const rect = new mojs.Shape({
    shape:        'rect',
    left:         '50%',
    fill:         'none',
    radius:       20,
    stroke:       { 'rgba(0,255,255, 1)' : 'magenta' },
    strokeWidth:  { 10: 0 },
    strokeDasharray: '100%',
    strokeDashoffset: { '-100%' : '100%' },
    rotate:        { 0: 180 },
  
    duration:     2000,
    repeat:       999,
  }).play();
  
  const polygon = new mojs.Shape({
    shape:        'polygon',
    points:       5,
    left:         '75%',
    fill:         { 'deeppink' : '#00F87F' },
    x:            { 'rand(-100%, -200%)' : 0  },
    rotate:        { 0: 'rand(0, 360)' },
    radius:       25,
  
    duration:     2000,
    repeat:       999,
  }).play();



  new mojs.Shape({
    parent:     '#triangle',
    shape:      'polygon',
    fill:       'orange',
    radius:     65,
    rotate:      { [-120]: -40 },
    x:          { [-200]: 20 },
    y:          { [50]: -20 },
    scaleX:     { 0 : 1.3 },
  
    repeat:     10,
    duration:   800,
    isYoyo:     true,
    backwardEasing: 'sin.in',
  
    isShowEnd:  false
  })