
#include <linux/types.h>
#include "defs.h"

const struct sfilter get_sfilters[] = {
	{1, {"media.admob.com" } }, 
 	{1, {"/gampad/ads" } }, 
 	{1, {".checkm8.com/adam/" } }, 
 	{1, {"pagead2.googlesyndication.com" } }, 
 	{1, {"xads.zedo.com/ads2/" } }, 
 	{1, {"xads.zedo.com/ads/" } }, 
 	{2, {"ad","doubleclick.net/" } }, 
 	{1, {"ad.yieldmanager.com/" } }, 
 	{1, {"ads.ad-center.com/" } }, 
 	{1, {"adsbygoogle.js" } }, 
 	{1, {"yimg.com/gs/apex/mediastore/" } }, 
 	{2, {"yimg.com","/dianominewwidget2.html" } }, 
 	{2, {"yimg.com","/quickplay_maxwellhouse.png" } }, 
 	{2, {"yimg.com","/sponsored.js" } }, 
 	{2, {"yimg.com","_skin_" } }, 
 	{2, {"google.com/jsapi?autoload=","ads" } }, 
 	{1, {"youtube-mp3.org/acode/" } }, 
 	{1, {"youtube.com/yva_video?adformat" } }, 
 	{2, {"s.ytimg.com/yts/swfbin/player-","/watch_as3.swf" } }, 
 	{1, {"youtube.com/yt/advertise/medias/images/" } }, 
 	{1, {"youtube.com/yt/css/www-advertise.css" } }, 
 	{2, {"youtube.com","_adsense_" } }, 
 	{3, {"ytimg.com/yts/img/channels/","_banner-",".jpg" } }, 
 	{3, {"ytimg.com/yts/img/channels/","_banner-",".png" } }, 
 	{2, {"ytimg.com","/channels4_banner.jpg" } }, 
 	{2, {"ytimg.com","/channels4_banner_hd.jpg" } }, 
 	{2, {"ytimg.com","/new_watch_background.jpg?" } }, 
 	{3, {"ytimg.com","/new_watch_background_",".jpg" } }, 
 	{2, {"ytimg.com","_banner" } }, 
 	{1, {"/yahoo-ad-" } }, 
 	{1, {"/yahoo-ads/" } }, 
 	{1, {"/yahoo/ads." } }, 
 	{1, {"/yahoo_overture." } }, 
 	{1, {"/YahooAd_" } }, 
 	{1, {"/yahooads." } }, 
 	{1, {"/yahooads/" } }, 
 	{1, {"/yahooadsapi." } }, 
 	{1, {"/yahooadsobject." } }, 
 	{1, {"partnerads.ysm.yahoo.com" } }, 
 	{1, {"partnerads1.ysm.yahoo.com" } }, 
 	{1, {"yimg.com/ao/adv/" } }, 
 	{1, {"yimg.com/cv/ae/ca/audience/" } }, 
 	{1, {"yimg.com/cv/ae/us/audience/" } }, 
 	{2, {"yimg.com/cv/eng/",".webm" } }, 
 	{2, {"yimg.com/cv/eng/","/635x100_" } }, 
 	{2, {"yimg.com/cv/eng/","/970x250_" } }, 
 	{2, {"yimg.com/dh/ap/default/","/skins_" } }, 
 	{2, {"yimg.com/hl/ap/","_takeover_" } }, 
 	{2, {"yimg.com/hl/ap/default/","_background" } }, 
 	{1, {"yimg.com/i/i/de/cat/yahoo.html" } }, 
 	{1, {"yimg.com/la/i/wan/widgets/wjobs/" } }, 
 	{1, {"yimg.com/rq/darla/" } }, 
 	{2, {"yimg.com","/billboardv2r5min.js" } }, 
 	{1, {"google_ads_iframe" } }, 
 	{2, {"yimg.com","/darla-secure-pre-min.js" } }, 
 	{2, {"yimg.com","/fairfax/$image" } }, 
 	{2, {"yimg.com","/flash/promotions/" } }, 
 	{2, {"yimg.com","/ya-answers-dmros-ssl-min.js" } }, 
 	{2, {"yimg.com","/yad*.js" } }, 
 	{2, {"yimg.com","/yad.html" } }, 
 	{2, {"yimg.com","/yfpadobject.js" } }, 
 	{2, {"yimg.com","_east.swf" } }, 
 	{2, {"yimg.com","_north.swf" } }, 
 	{2, {"yimg.com","_west.swf" } }, 
 	{2, {"youtube.com","_reklama_" } }, 
 	{1, {"b.ynet.co.il" } }, 
 	{1, {"ynetbanneradmin" } }, 
 	{1, {"YnetBannerAdmin" } }, 
 	{1, {"d2.zedo.com" } }, 
 	{1, {"xads.zedo.com" } }, 
 	{1, {"yads.zedo.com" } }, 
 	{1, {"z1.zedo.com" } }, 
 	{1, {"ads.one.co.il" } }, 
 	{2, {"tpc.googlesyndication.com","container" } }, 
 	{2, {"shev.com","advsms" } }, 
 	{1, {"partner.googleadservices.com/gampad" } }, 
 	{1, {"partner.googleadservices.com/gampad" } }, 
 	{1, {"partner.googleadservices.com/gampad" } }, 
 	{1, {"partner.googleadservices.com/gampad" } }, 
 	{1, {"partner.googleadservices.com/gpt" } }, 
 	{1, {"partner.googleadservices.com/gpt" } }, 
 	{1, {"/google-ad-" } }, 
 	{1, {"/google-ad?" } }, 
 	{1, {"/google-ads." } }, 
 	{1, {"/google-ads/" } }, 
 	{1, {"/google-adsense-" } }, 
 	{1, {"/google-adsense." } }, 
 	{1, {"/google-adverts-" } }, 
 	{1, {"/google-adwords" } }, 
 	{1, {"/google-afc-" } }, 
 	{1, {"/google-afc." } }, 
 	{1, {"/google/ad?" } }, 
 	{1, {"/google/adv." } }, 
 	{1, {"/google160." } }, 
 	{1, {"/google728." } }, 
 	{1, {"/google_ad." } }, 
 	{1, {"/google_ad_" } }, 
 	{1, {"/google_ads." } }, 
 	{1, {"/google_ads/" } }, 
 	{1, {"/google_ads_" } }, 
 	{1, {"/google_adv/" } }, 
 	{1, {"/google_afc." } }, 
 	{1, {"/google_afc_" } }, 
 	{1, {"/google_afs." } }, 
 	{1, {"/google_afs_widget/" } }, 
 	{1, {"/google_caf.js?" } }, 
 	{1, {"/google_lander2.js" } }, 
 	{1, {"/google_radlinks_" } }, 
 	{1, {"/googlead-" } }, 
 	{1, {"/googlead." } }, 
 	{1, {"/googlead1." } }, 
 	{1, {"/googlead160." } }, 
 	{1, {"/GoogleAd300." } }, 
 	{1, {"/googlead336x280." } }, 
 	{1, {"/googlead_" } }, 
 	{1, {"/GoogleAdBg." } }, 
 	{1, {"/googleadcode." } }, 
 	{1, {"/googleaddfooter." } }, 
 	{1, {"/googleaddisplayframe." } }, 
 	{1, {"/googleadhp." } }, 
 	{1, {"/googleadhpbot." } }, 
 	{1, {"/googleadhtml/" } }, 
 	{1, {"/googleadiframe_" } }, 
 	{1, {"/googleadright." } }, 
 	{1, {"/googleads-" } }, 
 	{1, {"/googleads." } }, 
 	{1, {"/googleads/" } }, 
 	{1, {"/googleads1." } }, 
 	{1, {"/googleads2." } }, 
 	{1, {"/googleads3widetext." } }, 
 	{1, {"/googleads_" } }, 
 	{1, {"/googleadsafc_" } }, 
 	{1, {"/googleadsafs_" } }, 
 	{1, {"/googleAdScripts." } }, 
 	{1, {"/googleadsense." } }, 
 	{1, {"/googleAdTaggingSubSec." } }, 
 	{1, {"/googleadunit?" } }, 
 	{1, {"/googleafc." } }, 
 	{1, {"/googleafs." } }, 
 	{1, {"/googleafvadrenderer." } }, 
 	{1, {"/googlecontextualads." } }, 
 	{1, {"/googleheadad." } }, 
 	{1, {"/googleleader." } }, 
 	{1, {"/googleleads." } }, 
 	{1, {"/googlempu." } }, 
 	{1, {"/iframe-ad." } }, 
 	{1, {"/iframe-ads/" } }, 
 	{1, {"/iframe-mgid-" } }, 
 	{1, {"/iframe.ad/" } }, 
 	{1, {"/iframe/ad/" } }, 
 	{1, {"/iframe/ad_" } }, 
 	{1, {"/iframe/ads/" } }, 
 	{1, {"/iframe_ad." } }, 
 	{1, {"/iframe_ad?" } }, 
 	{1, {"/iframe_ad_" } }, 
 	{1, {"/iframe_ads/" } }, 
 	{1, {"/iframe_ads_" } }, 
 	{1, {"/iframe_chitika_" } }, 
 	{1, {"/iframe_sponsor_" } }, 
 	{1, {"/iframead." } }, 
 	{1, {"/iframead/" } }, 
 	{1, {"/iframead_" } }, 
 	{1, {"/iframeadcontent." } }, 
 	{1, {"/iframeads." } }, 
 	{1, {"/iframeads/" } }, 
 	{1, {"/iframeadsense." } }, 
 	{1, {"/iframeadsensewrapper." } }, 
 	{1, {"/iframedartad." } }, 
 	{1, {"/iframes/ad/" } }, 
 
};
const size_t num_get_sfilters = sizeof(get_sfilters) / sizeof(get_sfilters[0]);

const struct sfilter dns_sfilters[] = {
	{3, {"media","admob","com" } }, 
 	{3, {"pagead2","googlesyndication","com" } }, 
 	{3, {"xads","zedo","com" } }, 
 	{3, {"xads","zedo","com" } }, 
 	{3, {"ad","doubleclick","net" } }, 
 	{4, {"cm","g","doubleclick","net" } }, 
 	{3, {"ad","yieldmanager","com" } }, 
 	{3, {"ads","ad-center","com" } }, 
 	{3, {"partnerads","ysm","yahoo" } }, 
 	{3, {"partnerads1","ysm","yahoo" } }, 
 	{2, {"checkm8","com" } }, 
 	{4, {"b","ynet","co","il" } }, 
 	{3, {"fls","doubleclick","net" } }, 
 	{3, {"c1","zedo","com" } }, 
 	{3, {"c2","zedo","com" } }, 
 	{3, {"c3","zedo","com" } }, 
 	{3, {"c4","zedo","com" } }, 
 	{3, {"c5","zedo","com" } }, 
 	{3, {"c6","zedo","com" } }, 
 	{3, {"c7","zedo","com" } }, 
 	{3, {"c8","zedo","com" } }, 
 	{3, {"c9","zedo","com" } }, 
 	{3, {"c10","zedo","com" } }, 
 	{3, {"c11","zedo","com" } }, 
 	{3, {"c12","zedo","com" } }, 
 	{3, {"c13","zedo","com" } }, 
 	{3, {"z1","zedo","com" } }, 
 	{3, {"z2","zedo","com" } }, 
 	{3, {"z3","zedo","com" } }, 
 	{3, {"z4","zedo","com" } }, 
 	{3, {"z5","zedo","com" } }, 
 	{3, {"z6","zedo","com" } }, 
 	{3, {"z7","zedo","com" } }, 
 	{3, {"z8","zedo","com" } }, 
 	{3, {"z9","zedo","com" } }, 
 	{3, {"z10","zedo","com" } }, 
 	{3, {"z11","zedo","com" } }, 
 	{3, {"z12","zedo","com" } }, 
 	{3, {"z13","zedo","com" } }, 
 	{3, {"d2","zedo","com" } }, 
 	{3, {"xads","zedo","com" } }, 
 	{3, {"yads","zedo","com" } }, 
 	{3, {"z1","zedo","com" } }, 
 	{4, {"ads","one","co","il" } }, 
 	{4, {"xwbe","wcdn","co","il" } }, 
 	{3, {"pirsumot","co","il" } }, 
 
};
const size_t num_dns_sfilters = sizeof(dns_sfilters) / sizeof(dns_sfilters[0]);
