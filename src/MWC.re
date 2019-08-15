module MaterialIcon = {
  [@bs.module "@material/react-material-icon"] [@react.component]
  external make: (~className: string=?, ~icon: string, ~hasRipple: bool=?) => React.element = "default";
};

module Button = {
  [@bs.module "@material/react-button"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~raised: bool=?,
      ~unelevated: bool=?,
      ~outlined: bool=?,
      ~dense: bool=?,
      ~disabled: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

module AppBar = {
  [@bs.module "@material/react-top-app-bar"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~raised: bool=?,
      ~unelevated: bool=?,
      ~outlined: bool=?,
      ~dense: bool=?,
      ~disabled: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};