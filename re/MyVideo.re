open BsReactNative;
open Style;
open ReasonExpo;

let styles = StyleSheet.create({"player": style([width(Pt(200.0))])});

let component = ReasonReact.statelessComponent("MyVideo");

let make = _children => {
  ...component,
  render: _self =>
    <Video
      source={`Required(Packager.require("~assets/my-video.mp4"))}
      rate="1.0"
      volume=1.0
      isMuted=true
      isLooping=true
      resizeMode=Video.COVER
      shouldPlay=true
      style=StyleSheet.absoluteFillObject
    />,
};

let default = ReasonReact.wrapReasonForJs(~component, () => make([||]));