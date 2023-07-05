R"(
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  </head>
  <body>
    <div class="container-fluid">
      <div class="col-xs-12"  style="height: 90vh">
        <div class="row" style="height: 33.33%; padding-top: 1em; padding-bottom:1em">
          <div class="col-xs-3" ></div>
          <div class="col-xs-6" style="text-align: center; height: 100%">
            <button id="drive" type="button" class="btn btn-default btn-success btn btn-primary btn-lg" style="height: 100%; width: 100%" onmousedown='makeAjaxCall("forward")' onmouseup='makeAjaxCall("driveStop")' ontouchstart='makeAjaxCall("forward")' ontouchend='makeAjaxCall("driveStop")'>Drive</button>
          </div>
          <div class="col-xs-3" ></div>
        </div>
        <div class="row" style="height: 33.33%; padding-bottom:1em">
          <div class="col-xs-4" style="height: 100%; text-align: center">
            <button id="left" type="button" class="btn btn-default" style="height: 100%; width: 100%" onmousedown='makeAjaxCall("left")' onmouseup='makeAjaxCall("steerStop")' ontouchstart='makeAjaxCall("left")' ontouchend='makeAjaxCall("steerStop")'>
				<svg xmlns="http://www.w3.org/2000/svg" width="45" height="45" fill="currentColor" class="bi bi-arrow-left-square-fill" viewBox="0 0 16 16">
				  <path d="M16 14a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2V2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12zm-4.5-6.5H5.707l2.147-2.146a.5.5 0 1 0-.708-.708l-3 3a.5.5 0 0 0 0 .708l3 3a.5.5 0 0 0 .708-.708L5.707 8.5H11.5a.5.5 0 0 0 0-1z"/>
				</svg>
			</button>
          </div>
		  <div class="col-xs-4" ></div>
          <div class="col-xs-4" style="height: 100%; text-align: center">
            <button id="right" type="button" class="btn btn-default" style="height: 100%; width: 100%" onmousedown='makeAjaxCall("right")' onmouseup='makeAjaxCall("steerStop")' ontouchstart='makeAjaxCall("right")' ontouchend='makeAjaxCall("steerStop")'>
			<svg xmlns="http://www.w3.org/2000/svg" width="45" height="45" fill="currentColor" class="bi bi-arrow-right-square-fill" viewBox="0 0 16 16">
			  <path d="M0 14a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V2a2 2 0 0 0-2-2H2a2 2 0 0 0-2 2v12zm4.5-6.5h5.793L8.146 5.354a.5.5 0 1 1 .708-.708l3 3a.5.5 0 0 1 0 .708l-3 3a.5.5 0 0 1-.708-.708L10.293 8.5H4.5a.5.5 0 0 1 0-1z"/>
			</svg>
			</button>
          </div>
          <div class="col-xs-4" ></div>
        </div>
        <div class="row" style="height: 33.33%; padding-bottom:1em">
          <div class="col-xs-3" ></div>
          <div class="col-xs-6" style="height: 100%; text-align: center">
            <button id="back" type="button" class="btn btn-default btn-danger btn btn-primary btn-lg" style="height: 100%; width: 100%" onmousedown='makeAjaxCall("back")' onmouseup='makeAjaxCall("driveStop")' ontouchstart='makeAjaxCall("back")' ontouchend='makeAjaxCall("driveStop")'>Back</button>
          </div>
          <div class="col-xs-3" ></div>
		</div>
      </div>
	</div>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
    <script> function makeAjaxCall(url){$.ajax({"url": url})}</script>
    <!--<script>
       document.addEventListener('keydown', function(event) {
          if(event.keyCode == 37) {
              //Left Arrow
              makeAjaxCall("left");            
          }
          else if(event.keyCode == 39) {
              //Right Arrow
              makeAjaxCall("right");   
          } else if(event.keyCode == 38) {
              //Up Arrow
              makeAjaxCall("forward");   
          } else if(event.keyCode == 40) {
              //Down Arrow
              makeAjaxCall("back");   
          }
      });

      document.addEventListener('keyup', function(event) {
          if(event.keyCode == 37 ||event.keyCode == 39 ) {
              //Left or Right Arrow
              makeAjaxCall("steerStop");            
          }
          else if(event.keyCode == 38 ||event.keyCode == 40 ) {
              //Up or Down Arrow
              makeAjaxCall("driveStop");            
          }
      });
    </script>-->
  </body>
</html>

)"
