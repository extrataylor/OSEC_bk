<html lang="en">
	<head>
		<meta charset="utf-8" />
		<!-- Always force latest IE rendering engine (even in intranet) & Chrome Frame
		Remove this if you use the .htaccess -->
		<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
		<title>Occupy the SEC</title>
		<meta name="description" content="Occupy the SEC works to ensure that financial regulators act in the public interest" />
		<meta name="viewport" content="width=device-width; initial-scale=1.0" />
		<link rel="stylesheet" href="http://occupythesec.org/css/style.css">
        <link rel="shortcut icon" href="http://occupythesec.org/favicon.ico" type="image/x-icon" />
		<script src="js/libs/modernizr.custom.48826.js" type="text/javascript"></script>
		
	<!-- Begin Small Nav -->	
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
	<link rel="stylesheet" href="http://occupythesec.org/js/smallnav/normalize.css">
	<link rel="stylesheet" href="http://occupythesec.org/js/smallnav/style.css">
	<link href='http://fonts.googleapis.com/css?family=PT+Sans:400,700' rel='stylesheet' type='text/css'>
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js"></script>
	<script>
		$(function() {
			var pull 		= $('#pull');
				menu 		= $('nav ul');
				menuHeight	= menu.height();

			$(pull).on('click', function(e) {
				e.preventDefault();
				menu.slideToggle();
			});

			$(window).resize(function(){
        		var w = $(window).width();
        		if(w > 320 && menu.is(':hidden')) {
        			menu.removeAttr('style');
        		}
    		});
		});
	</script>
	
	
<!-- End Small Nav -->
		
		
		
		
		
		<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-27758545-2']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

  		</script>
  		
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-36820493-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>  		
  		
  		
  		<style type="text/css">#announce {margin-top: 20px;}</style>


  <!-- Begin RSS -->	
  	
  	<link href="http://occupythesec.org/js/rss/rss.css" rel="stylesheet" type="text/css" />

	<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js" type="text/javascript"></script>
	<script type="text/javascript">
		var jQuery_1_7_1 = $.noConflict(true);
	</script>
	<script src="http://occupythesec.org/js/rss/jquery.zrssfeed.js" type="text/javascript"></script>
	
<!-- End RSS -->



	</head>
	
	<body>
	
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>

<!-- Begin Lightbox -->
<!-- Add jQuery library -->
	<script type="text/javascript" src="http://occupythesec.org/js/fancybox/lib/jquery-1.8.2.min.js"></script>
	<script type="text/javascript">
		var jQuery_1_8_2 = $.noConflict(true);
	</script>

	<!-- Add mousewheel plugin (this is optional) -->
	<script type="text/javascript" src="http://occupythesec.org/js/fancybox/lib/jquery.mousewheel-3.0.6.pack.js"></script>

	<!-- Add fancyBox main JS and CSS files -->
	<script type="text/javascript" src="http://occupythesec.org/js/fancybox/source/jquery.fancybox.js?v=2.1.3"></script>
	<link rel="stylesheet" type="text/css" href="http://occupythesec.org/js/fancybox/source/jquery.fancybox.css?v=2.1.2" media="screen" />

	<!-- Add Button helper (this is optional) -->
	<link rel="stylesheet" type="text/css" href="http://occupythesec.org/js/fancybox/source/helpers/jquery.fancybox-buttons.css?v=1.0.5" />
	<script type="text/javascript" src="http://occupythesec.org/js/fancybox/source/helpers/jquery.fancybox-buttons.js?v=1.0.5"></script>

	<!-- Add Thumbnail helper (this is optional) -->
	<link rel="stylesheet" type="text/css" href="http://occupythesec.org/js/fancybox/source/helpers/jquery.fancybox-thumbs.css?v=1.0.7" />
	<script type="text/javascript" src="http://occupythesec.org/js/fancybox/source/helpers/jquery.fancybox-thumbs.js?v=1.0.7"></script>

	<!-- Add Media helper (this is optional) -->
	<script type="text/javascript" src="http://occupythesec.org/js/fancybox/source/helpers/jquery.fancybox-media.js?v=1.0.5"></script>

	<script type="text/javascript">
		$(document).ready(function() {
			/*
			 *  Simple image gallery. Uses default settings
			 */

			$('.fancybox').fancybox();

			/*
			 *  Different effects
			 */

			// Change title type, overlay closing speed
			$(".fancybox-effects-a").fancybox({
				helpers: {
					title : {
						type : 'outside'
					},
					overlay : {
						speedOut : 0
					}
				}
			});

			// Disable opening and closing animations, change title type
			$(".fancybox-effects-b").fancybox({
				openEffect  : 'none',
				closeEffect	: 'none',

				helpers : {
					title : {
						type : 'over'
					}
				}
			});

			// Set custom style, close if clicked, change title type and overlay color
			$(".fancybox-effects-c").fancybox({
				wrapCSS    : 'fancybox-custom',
				closeClick : true,

				openEffect : 'none',

				helpers : {
					title : {
						type : 'inside'
					},
					overlay : {
						css : {
							'background' : 'rgba(238,238,238,0.85)'
						}
					}
				}
			});

			// Remove padding, set opening and closing animations, close if clicked and disable overlay
			$(".fancybox-effects-d").fancybox({
				padding: 0,

				openEffect : 'elastic',
				openSpeed  : 150,

				closeEffect : 'elastic',
				closeSpeed  : 150,

				closeClick : true,

				helpers : {
					overlay : null
				}
			});

			/*
			 *  Button helper. Disable animations, hide close button, change title type and content
			 */

			$('.fancybox-buttons').fancybox({
				openEffect  : 'none',
				closeEffect : 'none',

				prevEffect : 'none',
				nextEffect : 'none',

				closeBtn  : false,

				helpers : {
					title : {
						type : 'inside'
					},
					buttons	: {}
				},

				afterLoad : function() {
					this.title = 'Image ' + (this.index + 1) + ' of ' + this.group.length + (this.title ? ' - ' + this.title : '');
				}
			});


			/*
			 *  Thumbnail helper. Disable animations, hide close button, arrows and slide to next gallery item if clicked
			 */

			$('.fancybox-thumbs').fancybox({
				prevEffect : 'none',
				nextEffect : 'none',

				closeBtn  : false,
				arrows    : false,
				nextClick : true,

				helpers : {
					thumbs : {
						width  : 50,
						height : 50
					}
				}
			});

			/*
			 *  Media helper. Group items, disable animations, hide arrows, enable media and button helpers.
			*/
			$('.fancybox-media')
				.attr('rel', 'media-gallery')
				.fancybox({
					openEffect : 'none',
					closeEffect : 'none',
					prevEffect : 'none',
					nextEffect : 'none',

					arrows : false,
					helpers : {
						media : {},
						buttons : {}
					}
				});

			/*
			 *  Open manually
			 */

			$("#fancybox-manual-a").click(function() {
				$.fancybox.open('1_b.jpg');
			});

			$("#fancybox-manual-b").click(function() {
				$.fancybox.open({
					href : 'iframe.html',
					type : 'iframe',
					padding : 5
				});
			});

			$("#fancybox-manual-c").click(function() {
				$.fancybox.open([
					{
						href : '1_b.jpg',
						title : 'My title'
					}, {
						href : '2_b.jpg',
						title : '2nd title'
					}, {
						href : '3_b.jpg'
					}
				], {
					helpers : {
						thumbs : {
							width: 75,
							height: 50
						}
					}
				});
			});


		});
	</script>



<!-- End lightbox -->


		
		
	<header>
		
		
		
		
				<nav class="clearfix">
				<ul>
				<span id="navleft">
					<div id="home1"><li class="navlogo"><a href="http://occupythesec.org"><span id="home" style="color: rgb(255,224,79);">Occupy the SEC</span></a></li></div>
					
					<div id="home2"><li class="navlogo"><a href="http://occupythesec.org"><span id="home" style="color: rgb(255,224,79);">OSEC</span></a></li></div>
					<li class="lefta"><a href="http://occupythesec.org/projects">Our Work</a></li>
					<li class="lefta"><a href="http://occupythesec.nycga.net/">Blog</a></li>
					<li class="lefta"><a href="http://occupythesec.org/media">Media</a></li>
					<li class="lefta" id="rcontact"><a href="http://occupythesec.org/contact">Contact Us</a></li>
				</span>
					<span id="social">
					<li id="leftsocial" class="leftnav"><a href="http://twitter.com/occupythesec" target="_blank"><img class="socialimg" src="http://occupythesec.org/img/twitter-icon.png" alt="Occupy the SEC on twitter" width="48" height="48"></a></li>
					<li class="leftnav"><a href="https://www.facebook.com/occupythesec" target="_blank"><img class="socialimg" src="http://occupythesec.org/img/facebook-icon.png" alt="Occupy the SEC on facebook" width="48" height="48"></a></li>
				</span>
				<span id="navright">
				
					<li><a class"here" href="#mailinglist">MAILING LIST</a></li>
				</span>
				</ul>
				<span>
				 	<li id="menu">
						<a href="#" id="pull"></a>
					</li>
				<span>
			</nav>
			</header>

		

					
			