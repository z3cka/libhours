<?php
// $Id$

/**
 * @file
 * Module functions to display library hours.
 *
 * @author Sean Watkins <slwatkins@uh.edu>
 * @copyright 2011 University of Houston Libraries (http://info.lib.uh.edu)
 */

/**
 * Display the hours page for a giving location
 *
 * @param $lid Location unique identifier
 * @param $pid Period unique identifier
 */

function libhours_display($lid = 0, $pid = 0){
	global $conf;
	// turn off drupal cache for this page
	$conf['cache'] = false;
	
	return theme('hours_display', $lid, $pid);
}

/**
 * redirects page for backwards computability
 */
function libhours_redirect($lid = 0){
	drupal_goto('hours/' . $lid);
}